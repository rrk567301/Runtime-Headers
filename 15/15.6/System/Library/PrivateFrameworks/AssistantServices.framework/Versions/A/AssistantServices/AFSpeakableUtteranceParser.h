@class NSMutableDictionary, NSLocale;

@interface AFSpeakableUtteranceParser : NSObject {
    NSMutableDictionary *_providers;
    id _functionHandler;
    NSLocale *_locale;
}

@property (nonatomic) char handleTTSCodes;
@property (nonatomic) char handlesFunctions;

+ (char)_shouldAutomaticallyProvideFunctions;
+ (id)parseUserGeneratedMessage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)_handleControlCodeAtIndex:(unsigned int)a0 withBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; })a1 totalLength:(unsigned long long)a2 consumedLength:(unsigned int *)a3 hadEmpties:(char *)a4 containsPrivacySensitiveContents:(char *)a5 externalProviders:(char *)a6;
- (id)_handleOptionalAtIndex:(unsigned int)a0 withBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; })a1 totalLength:(unsigned long long)a2 consumedLength:(unsigned int *)a3 containsPrivacySensitiveContents:(char *)a4 externalProviders:(char *)a5;
- (id)_handleProviderAtIndex:(unsigned int)a0 withBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; })a1 totalLength:(unsigned long long)a2 consumedLength:(unsigned int *)a3 containsPrivacySensitiveContents:(char *)a4 hadEmpties:(char *)a5 externalProviders:(char *)a6;
- (id)_parseStringWithFormat:(id)a0 error:(id *)a1 hadEmpties:(char *)a2 containsPrivacySensitiveContents:(char *)a3 externalProviders:(char *)a4;
- (id)parseStringRemovingControlCharacters:(id)a0 error:(id *)a1;
- (id)parseStringRemovingControlCharacters:(id)a0 error:(id *)a1 containsPrivacySensitiveContents:(char *)a2;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1 containsPrivacySensitiveContents:(char *)a2;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1 containsPrivacySensitiveContents:(char *)a2 hasExternalDomains:(char *)a3;
- (id)parseStringWithFormat:(id)a0 error:(id *)a1 hasExternalDomains:(char *)a2;
- (id)parseStringWithFormat:(id)a0 includeControlCharacters:(char)a1 error:(id *)a2 hadEmpties:(char *)a3 containsPrivacySensitiveContents:(char *)a4 externalProviders:(char *)a5;
- (void)registerProvider:(id)a0 forNamespace:(id)a1;

@end
