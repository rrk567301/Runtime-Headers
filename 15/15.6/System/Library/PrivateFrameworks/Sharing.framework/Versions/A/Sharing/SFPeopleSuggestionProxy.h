@class NSString, NSUUID, SDSuggestionNode, SFProxyText;
@protocol SFPeopleSuggestion;

@interface SFPeopleSuggestionProxy : NSObject <SFLoadableProxy, SFPeopleSuggestionProxy, NSSecureCoding> {
    _Atomic unsigned int _avatarImageSlotID;
    _Atomic unsigned int _transportImageSlotID;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SDSuggestionNode *suggestionNode;
@property (retain, nonatomic) id<SFPeopleSuggestion> peopleSuggestion;
@property (retain, nonatomic) SFProxyText *displayName;
@property (retain, nonatomic) SFProxyText *subtitle;
@property unsigned int avatarImageSlotID;
@property unsigned int transportImageSlotID;
@property (nonatomic) char disabled;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) char isDisabled;

- (char)isEqual:(id)a0;
- (char)load;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPeopleSuggestion:(id)a0;
- (id)initWithSuggestionNode:(id)a0;

@end
