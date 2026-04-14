@class NSMutableArray;

@interface MXIComponentsDescriptorArray : NSObject <NSCopying> {
    NSMutableArray *_components;
    unsigned long long _count;
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
