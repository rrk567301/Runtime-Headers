@class NSString, AXFTextMarker;

@interface _SCRTextAreaChangeSimple : SCRTextAreaChange {
    char _truncated;
}

@property (nonatomic) long long editType;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) AXFTextMarker *marker;
@property (nonatomic) unsigned long long length;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isTruncated;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (char)containedByRange:(id)a0 forUIElement:(id)a1;
- (char)isCandidateForCharacterEchoWithTypingEchoPreference:(long long)a0;
- (char)isCandidateForWordEchoWithTypingEchoPreference:(long long)a0;
- (void)updateMarker:(id)a0;

@end
