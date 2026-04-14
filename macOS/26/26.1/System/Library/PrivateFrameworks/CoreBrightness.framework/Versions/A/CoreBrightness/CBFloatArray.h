@interface CBFloatArray : NSObject {
    float *_data;
    unsigned long long _count;
    unsigned long long _size;
}

- (const float *)data;
- (id)description;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)a0;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (const float *)at:(unsigned long long)a0;
- (id)copyNSArray;
- (float *)dataCopy;
- (float)get:(unsigned long long)a0;
- (id)initWithValues:(float *)a0 andCount:(unsigned long long)a1;
- (float *)mutableData;

@end
