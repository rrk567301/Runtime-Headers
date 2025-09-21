@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)initWithPath:(id)a0;
- (BOOL)save;
- (void)setNextRotationDate:(id)a0;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (unsigned long long)numberOfWeeksPerRotation;
- (id)nextRotationDate;
- (BOOL)loadUsingGuardedData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)subject;
- (void)rotateSubject;
- (id)anchorDate;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)nextRotationDateAfter:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)subjectWithProjectId:(int)a0;
- (void).cxx_destruct;

@end
