@class NSDictionary, NSString;

@interface SKDRecord : NSObject {
    unsigned int _indexType;
    NSDictionary *_record;
    NSString *_bundleID;
    NSString *_filePath;
}

@property (readonly, nonatomic) long long context;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (id)initWithRecord:(id)a0 filePath:(id)a1;

@end
