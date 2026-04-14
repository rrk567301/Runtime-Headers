@class NSString;

@interface IMDExportedParticipant : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ formattedAddress;
    void /* function */ unformattedAddress;
    void /* function */ countryCode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic, readonly) NSString *unformattedAddress;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) BOOL isSelf;
@property (nonatomic, readonly) long long sequenceID;
@property (nonatomic, readonly) long long accountUsageCount;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFormattedAddress:(id)a0 unformattedAddress:(id)a1 countryCode:(id)a2 isSelf:(BOOL)a3 accountUsageCount:(long long)a4 sequenceID:(long long)a5;

@end
