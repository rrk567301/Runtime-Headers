@class NSNumber, NSString, NSData;

@interface TUExternalParticipant : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ displayName;
    void /* function */ info;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSData *info;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 info:(id)a2 status:(long long)a3;

@end
