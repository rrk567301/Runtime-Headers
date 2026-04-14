@class _SCRTextAreaChangeSimple;

@interface _SCRTextAreaReplacement : SCRTextAreaChange

@property (retain, nonatomic) _SCRTextAreaChangeSimple *left;
@property (retain, nonatomic) _SCRTextAreaChangeSimple *right;

- (BOOL)isTruncated;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)value;
- (id)description;
- (id)marker;
- (long long)editType;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (void)updateMarker:(id)a0;

@end
