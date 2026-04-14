@class NSString, EDKeyedCollection;

@interface EDTableStyle : NSObject <NSCopying> {
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)init;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)tableStyleElements;

@end
