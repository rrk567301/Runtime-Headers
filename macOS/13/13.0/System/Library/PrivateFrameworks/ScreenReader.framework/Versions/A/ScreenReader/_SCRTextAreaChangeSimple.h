@class NSString, SCRTextMarker;

@interface _SCRTextAreaChangeSimple : SCRTextAreaChange {
    BOOL _truncated;
}

@property (nonatomic) long long editType;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) SCRTextMarker *marker;
@property (nonatomic) unsigned long long length;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isTruncated;
- (BOOL)isCandidateForCharacterEchoWithTypingEchoPreference:(long long)a0;
- (BOOL)isCandidateForWordEchoWithTypingEchoPreference:(long long)a0;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (void)updateMarker:(id)a0;

@end
