@class NSData;

@interface SKDTextEmbedding : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } associatedRange;

- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 type:(unsigned long long)a1 size:(unsigned long long)a2 data:(id)a3 associatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
