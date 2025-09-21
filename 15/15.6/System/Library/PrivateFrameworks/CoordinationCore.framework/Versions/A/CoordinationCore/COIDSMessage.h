@class NSString, NSDictionary, NSData, NSError;

@interface COIDSMessage : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *command;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithError:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithRequest:(id)a0;
- (id)initWithResponse:(id)a0;
- (void)_commandPayload:(id)a0;
- (char)checkValue:(id)a0 forKey:(id)a1 isKindOfClass:(Class)a2 error:(out id *)a3;
- (id)unarchivePayloadOfTypes:(id)a0 error:(id *)a1;
- (char)validateCommand:(inout id *)a0 error:(out id *)a1;
- (char)validateData:(inout id *)a0 error:(out id *)a1;
- (char)validateError:(inout id *)a0 error:(out id *)a1;
- (char)validateMetadata:(inout id *)a0 error:(out id *)a1;
- (char)validateType:(inout id *)a0 error:(out id *)a1;
- (char)validateVersion:(inout id *)a0 error:(out id *)a1;

@end
