@class _LSDatabase, NSData;

@interface LSRecordPromise : NSObject <NSSecureCoding> {
    _LSDatabase *_db;
    NSData *_pi;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRecord:(id)a0;
- (id)fulfillReturningError:(id *)a0;
- (id)initWithRecord:(id)a0 error:(id *)a1;

@end
