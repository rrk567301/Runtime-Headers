@class NSSet, _EXExtensionAvailability;

@interface _EXQueryResult : NSObject <NSSecureCoding> {
    void /* function */ identities;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *identities;
@property (nonatomic, readonly) _EXExtensionAvailability *availablility;

- (id)initWithIdentities:(id)a0;
- (id)initWithAvailablility:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
