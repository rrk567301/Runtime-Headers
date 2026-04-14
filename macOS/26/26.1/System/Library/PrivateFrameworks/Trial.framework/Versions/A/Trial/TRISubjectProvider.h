@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)subject;
- (id)initWithPath:(id)a0;
- (unsigned long long)numberOfWeeksPerRotation;
- (void)encodeWithCoder:(id)a0;
- (id)nextRotationDateAfter:(id)a0;
- (id)nextRotationDate;
- (void)setNextRotationDate:(id)a0;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)rotateSubject;
- (id)anchorDate;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadUsingGuardedData:(id)a0;
- (id)subjectWithProjectId:(int)a0;
- (BOOL)save;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;

@end
