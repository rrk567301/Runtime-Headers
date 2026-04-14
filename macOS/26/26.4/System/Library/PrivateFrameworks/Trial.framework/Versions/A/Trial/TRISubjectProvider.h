@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)initWithPath:(id)a0;
- (id)subject;
- (BOOL)save;
- (id)subjectWithProjectId:(int)a0;
- (BOOL)loadUsingGuardedData:(id)a0;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)anchorDate;
- (id)nextRotationDateAfter:(id)a0;
- (id)nextRotationDate;
- (void).cxx_destruct;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)rotateSubject;
- (id)initWithCoder:(id)a0;
- (unsigned long long)numberOfWeeksPerRotation;
- (void)setNextRotationDate:(id)a0;

@end
