@class NSString, SUCoreDescriptor, NSError, SUMacControllerClientRequest;

@interface SUMacControllerSplatRollbackEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *persistenceDescription;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SUMacControllerClientRequest *clientRequest;
@property (readonly, retain, nonatomic) id /* block */ completion;
@property (retain, nonatomic) SUCoreDescriptor *brainDescriptor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCompletion:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)getError;
- (id)getBrainDescriptor;
- (id)getClientRequest;
- (id)initWithClientRequest:(id)a0 completion:(id /* block */)a1;

@end
