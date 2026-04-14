@class NSString;

@interface GDVUEntityClass : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char intValue;
@property (nonatomic, readonly) long long hash;

+ (id)entity;
+ (id)person;
+ (id)animal;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
