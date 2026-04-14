@class NSSet, _EXExtensionAvailablility;

@interface _EXQueryResult : NSObject <NSSecureCoding> {
    void /* function */ identities;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *identities;
@property (nonatomic, readonly) _EXExtensionAvailablility *availablility;

- (id)initWithAvailablility:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentities:(id)a0;
- (void).cxx_destruct;

@end
