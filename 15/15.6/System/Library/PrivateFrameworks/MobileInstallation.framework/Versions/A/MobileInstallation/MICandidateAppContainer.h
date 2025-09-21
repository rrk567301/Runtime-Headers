@class NSURL;

@interface MICandidateAppContainer : MICandidateContainer

@property (retain, nonatomic) NSURL *appURL;
@property (readonly, nonatomic) char isPlaceholder;

- (void).cxx_destruct;

@end
