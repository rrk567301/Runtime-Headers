@class NSString;

@interface CPParticipantTranslationRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ aliasedIdentifier;
    void /* unknown type, empty encoding */ isSaltVerified;
    void /* unknown type, empty encoding */ isLocalParticipant;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
