@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char automaticallyMergesContext;
@property (nonatomic) char refreshesAfterSave;
@property (nonatomic) char automaticallyPinToFirstFetch;
@property (nonatomic) char rollbackOnErrors;
@property (nonatomic) long long requiredState;
@property (nonatomic) unsigned long long libraryRole;
@property (nonatomic) char preventsWaitingForRequiredState;
@property (nonatomic) unsigned long long libraryInitiator;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
