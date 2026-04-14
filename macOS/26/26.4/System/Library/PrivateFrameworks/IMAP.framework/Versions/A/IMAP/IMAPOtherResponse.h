@class NSString, NSArray;

@interface IMAPOtherResponse : IMAPResponse

@property (copy, nonatomic) NSString *responseName;
@property (copy, nonatomic) NSArray *parameters;

- (void).cxx_destruct;
- (id)description;

@end
