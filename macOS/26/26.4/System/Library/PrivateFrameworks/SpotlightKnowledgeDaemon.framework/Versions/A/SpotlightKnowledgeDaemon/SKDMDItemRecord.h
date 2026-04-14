@class NSString;

@interface SKDMDItemRecord : SKDItemRecord {
    NSString *_filePath;
}

@property (readonly, nonatomic) unsigned int indexType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 filePath:(id)a1 attributes:(id)a2;

@end
