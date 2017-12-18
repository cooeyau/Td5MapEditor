/*
 * Warning: Do NOT edit this file !
 *
 * This file is genereated automatically ! All changes will be lost !
 */

#ifndef baseMaps_h
#define baseMaps_h

#if wxUSE_STD_IOSTREAM
    #include <istream>
    #include <string>
#else
    #include <wx/wx.h>
    #include <wx/stream.h>
#endif

/**
 * Manage resources
 */
class baseMaps
{
#if wxUSE_STD_IOSTREAM
	public:
		baseMaps( const std::string & );
		virtual ~baseMaps();
		inline bool good() const { return in ? true : false; }
		inline std::istream *stream() const { return in; }
		static std::istream *get( const std::string & );
		static std::string getString( const std::string & );

	private:
		std::istream *in;

		static int hash( const char * );

#else
	public:
		baseMaps( const wxString & );
		virtual ~baseMaps();
		inline bool IsOk() const { return in ? true : false; }
		inline wxInputStream *GetStream() const { return in; }
		static wxInputStream *Get( const wxString & );

	private:
		wxInputStream *in;

		static int Hash( const char * );
#endif
};

#endif

