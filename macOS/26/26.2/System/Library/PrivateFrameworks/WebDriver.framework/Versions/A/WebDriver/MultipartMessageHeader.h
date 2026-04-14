@class NSString, NSMutableDictionary;

@interface MultipartMessageHeader : NSObject {
    NSString *contentDispositionName;
}

@property (readonly) NSMutableDictionary *fields;
@property (readonly) int encoding;

- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0 formEncoding:(unsigned long long)a1;

@end
