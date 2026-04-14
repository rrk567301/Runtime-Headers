@class NSData;

@interface CCSerializedSetSharedItem : CCItemMessage

@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) BOOL hasSharedIdentifier;
@property (readonly, nonatomic) long long sharedIdentifier;

- (void).cxx_destruct;
- (id)initWithContent:(id)a0 sharedIdentifier:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
