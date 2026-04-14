@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (BOOL)save;
- (id)initWithCoder:(id)a0;
- (id)nextRotationDateAfter:(id)a0;
- (id)subjectWithProjectId:(int)a0;
- (void)rotateSubject;
- (void)encodeWithCoder:(id)a0;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)nextRotationDate;
- (id)subject;
- (unsigned long long)numberOfWeeksPerRotation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)setNextRotationDate:(id)a0;
- (id)anchorDate;
- (id)initWithPath:(id)a0;
- (BOOL)loadUsingGuardedData:(id)a0;

@end
