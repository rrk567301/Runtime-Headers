@class NSString;

@interface WFRecordProperty : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isReadOnly) char readOnly;
@property (readonly, nonatomic, getter=isNonAtomic) char nonAtomic;
@property (readonly, nonatomic, getter=isDynamic) char dynamic;
@property (readonly, nonatomic) NSString *getter;
@property (readonly, nonatomic) NSString *setter;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 property:(struct objc_property { } *)a1;

@end
