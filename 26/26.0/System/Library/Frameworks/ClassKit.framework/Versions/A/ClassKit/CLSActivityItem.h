@class NSString;

@interface CLSActivityItem : CLSObject <CLSRelationable> {
    NSString *_title;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateObject:(id *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (void)mergeWithObject:(id)a0;

@end
