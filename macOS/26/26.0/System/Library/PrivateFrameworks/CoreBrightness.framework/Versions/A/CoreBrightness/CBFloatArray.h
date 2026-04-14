@interface CBFloatArray : NSObject {
    float *_data;
    unsigned long long _count;
    unsigned long long _size;
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)a0;
- (id)description;
- (const float *)data;
- (const float *)at:(unsigned long long)a0;
- (id)copyNSArray;
- (float *)dataCopy;
- (float)get:(unsigned long long)a0;
- (id)initWithValues:(float *)a0 andCount:(unsigned long long)a1;
- (float *)mutableData;

@end
