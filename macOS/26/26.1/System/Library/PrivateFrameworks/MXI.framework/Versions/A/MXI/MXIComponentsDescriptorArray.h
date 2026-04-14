@class NSMutableArray;

@interface MXIComponentsDescriptorArray : NSObject <NSCopying> {
    NSMutableArray *_components;
    unsigned long long _count;
}

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;

@end
