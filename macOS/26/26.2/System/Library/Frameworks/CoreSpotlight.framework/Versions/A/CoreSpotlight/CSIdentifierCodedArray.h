@class CSDecoder;

@interface CSIdentifierCodedArray : NSArray {
    CSDecoder *_deletes;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWithDeletes:(id)a0;

@end
