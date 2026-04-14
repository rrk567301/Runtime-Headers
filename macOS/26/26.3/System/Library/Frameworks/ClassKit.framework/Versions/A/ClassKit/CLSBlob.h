@class NSString, NSData;

@interface CLSBlob : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)dictionaryRepresentation;
- (id)initWithType:(int)a0 data:(id)a1;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)mergeWithObject:(id)a0;

@end
