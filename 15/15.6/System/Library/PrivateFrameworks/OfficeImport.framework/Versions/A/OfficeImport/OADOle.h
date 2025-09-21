@class NSString;

@interface OADOle : NSObject {
    char mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (char)isCLSIDSupported:(id)a0;
+ (char)isProgIDChart:(id)a0;
+ (char)isProgIDMathType:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (void)setObject:(id)a0;
- (id)unicodeUserType;
- (id)CLSID;
- (id)ansiClipboardFormatName;
- (id)ansiProgID;
- (id)ansiUserType;
- (char)iconic;
- (id)macClipboardFormat;
- (void)setAnsiClipboardFormatName:(id)a0;
- (void)setAnsiProgID:(id)a0;
- (void)setAnsiUserType:(id)a0;
- (void)setCLSID:(id)a0;
- (void)setIconic:(char)a0;
- (void)setMacClipboardFormat:(id)a0;
- (void)setUnicodeClipboardFormatName:(id)a0;
- (void)setUnicodeProgID:(id)a0;
- (void)setUnicodeUserType:(id)a0;
- (void)setWinClipboardFormat:(unsigned int)a0;
- (id)unicodeClipboardFormatName;
- (id)unicodeProgID;
- (unsigned int)winClipboardFormat;

@end
