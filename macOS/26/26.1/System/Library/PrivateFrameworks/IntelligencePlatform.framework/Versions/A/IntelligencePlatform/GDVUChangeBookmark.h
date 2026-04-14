@interface GDVUChangeBookmark : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsSecureCoding;
+ (id)decodeFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)encodeToDataAndReturnError:(id *)a0;

@end
