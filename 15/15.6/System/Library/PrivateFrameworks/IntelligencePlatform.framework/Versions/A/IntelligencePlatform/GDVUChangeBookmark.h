@interface GDVUChangeBookmark : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long hash;

+ (char)supportsSecureCoding;
+ (id)decodeFromData:(id)a0 error:(id *)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodeToDataAndReturnError:(id *)a0;

@end
