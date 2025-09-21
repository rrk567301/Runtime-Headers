@class NSString, NSData;

@interface CLSBlob : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *data;

+ (char)supportsSecureCoding;
+ (id)relations;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (char)validateObject:(id *)a0;
- (id)initWithType:(int)a0 data:(id)a1;
- (void)mergeWithObject:(id)a0;

@end
