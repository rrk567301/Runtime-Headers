@class IMKCandidateUIString;

@interface IMKCandidatePositionedUIString : NSObject

@property (retain, nonatomic) IMKCandidateUIString *string;
@property (nonatomic) double position;
@property (nonatomic) char rightAligned;

- (void)dealloc;
- (id)copy;

@end
