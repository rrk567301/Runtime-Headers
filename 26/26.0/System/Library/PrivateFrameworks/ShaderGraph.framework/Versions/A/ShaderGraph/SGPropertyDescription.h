@class NSString, SGTypeDescription;

@interface SGPropertyDescription : NSObject {
    void /* function */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SGTypeDescription *type;
@property (nonatomic, readonly) BOOL visible;
@property (nonatomic, readonly) NSString *description;

+ (id)create:(id)a0 type:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
