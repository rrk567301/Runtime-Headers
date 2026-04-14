@class NSDictionary, NSString, AXKonaMarker;

@interface AXKonaSpeechSegment : NSObject {
    char *_encodedString;
}

@property (class, readonly) NSDictionary *encodingReplacements;

@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned long long targetEncoding;
@property (nonatomic) unsigned long long encodedStringLength;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) AXKonaMarker *marker;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (char *)encodedString;

@end
