@class IMKCandidateUIString;

@interface IMKCandidatePositionedUIString : NSObject

@property (retain, nonatomic) IMKCandidateUIString *string;
@property (nonatomic) double position;
@property (nonatomic) BOOL rightAligned;

- (id)copy;
- (void)dealloc;

@end
