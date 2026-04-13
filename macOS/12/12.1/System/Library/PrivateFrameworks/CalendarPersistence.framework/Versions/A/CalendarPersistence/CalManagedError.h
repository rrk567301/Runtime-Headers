@class NSString, NSData, NSError, NSNumber;

@interface CalManagedError : CalManagedObject

@property (retain) NSString *domain;
@property (retain) NSNumber *code;
@property (retain) NSData *userInfo;
@property (retain, nonatomic) NSError *error;

+ (id)entityName;

- (BOOL)isEqualToError:(id)a0;
- (id)copyScrubbedUserInfoForError:(id)a0;
- (id)copyUnscrubbedUserInfoForError:(id)a0;

@end
