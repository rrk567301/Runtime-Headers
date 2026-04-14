@class NSObject;
@protocol KVProfileReader;

@interface KVProfile : NSObject <NSSecureCoding> {
    NSObject<KVProfileReader> *_profileReader;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)profileWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)emptyProfile:(id *)a0;
+ (void)initalize;

- (id)profileInfo;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)enumerateDatasetsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)toSerializedSets:(id *)a0;
- (id)serializedSets:(id *)a0;
- (BOOL)_enumerateSerializedSetsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithProfileData:(id)a0 error:(id *)a1;
- (id)initWithProfileData:(id)a0 provider:(id)a1 error:(id *)a2;

@end
