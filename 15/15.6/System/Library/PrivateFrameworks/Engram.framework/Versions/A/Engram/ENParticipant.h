@class NSSet, NSArray;
@protocol ENAccountPublicKey;

@interface ENParticipant : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) id<ENAccountPublicKey> accountPublicKey;
@property (retain, nonatomic) NSSet *aliases;
@property (retain, nonatomic) NSArray *devices;
@property (readonly, nonatomic) char supportsEngram;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deviceWithIdentifier:(id)a0;
- (id)initWithAccountPublicKey:(id)a0 aliases:(id)a1 devices:(id)a2;

@end
