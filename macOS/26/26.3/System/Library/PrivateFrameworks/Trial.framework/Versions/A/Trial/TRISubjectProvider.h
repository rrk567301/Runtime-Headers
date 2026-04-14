@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (BOOL)save;
- (id)initWithPath:(id)a0;
- (void)rotateSubject;
- (id)subject;
- (id)subjectWithProjectId:(int)a0;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)numberOfWeeksPerRotation;
- (id)anchorDate;
- (id)initWithCoder:(id)a0;
- (void)setNextRotationDate:(id)a0;
- (id)nextRotationDateAfter:(id)a0;
- (BOOL)loadUsingGuardedData:(id)a0;
- (id)nextRotationDate;
- (void)encodeWithCoder:(id)a0;

@end
