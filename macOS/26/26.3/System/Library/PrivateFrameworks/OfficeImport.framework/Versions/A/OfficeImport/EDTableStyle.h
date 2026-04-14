@class NSString, EDKeyedCollection;

@interface EDTableStyle : NSObject <NSCopying> {
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;

- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)tableStyleElements;

@end
