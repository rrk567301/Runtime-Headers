@class NSString, SUMacControllerDescriptor, SUMacControllerOverrides, NSError, SUMacControllerAccessControlContext;

@interface SUMacControllerPersistEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *persistenceDescription;
@property (nonatomic) long long reachedPhase;
@property (retain, nonatomic) NSString *updateUUID;
@property (retain, nonatomic) SUMacControllerAccessControlContext *accessControlContext;
@property (retain, nonatomic) SUMacControllerDescriptor *descriptor;
@property (retain, nonatomic) SUMacControllerOverrides *overrides;
@property (retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) id /* block */ completion;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (id)getOverrides;
- (id)getError;
- (id)getDescriptor;
- (id)getUpdateUUID;
- (id)getAccessControlContext;

@end
