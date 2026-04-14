@interface IOFastPathField : NSObject {
    unsigned int key;
    int type;
    unsigned long long offset;
    unsigned long long size;
}

+ (id)fieldWithDict:(id)a0;
+ (id)fieldWithKey:(unsigned int)a0 type:(int)a1 offset:(unsigned long long)a2 size:(unsigned long long)a3;

- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(unsigned int)a0 type:(int)a1 offset:(unsigned long long)a2 size:(unsigned long long)a3;

@end
