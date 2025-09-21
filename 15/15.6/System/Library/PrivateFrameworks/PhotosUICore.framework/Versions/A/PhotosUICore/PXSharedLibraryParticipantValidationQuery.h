@class NSString;

@interface PXSharedLibraryParticipantValidationQuery : NSObject

@property (readonly, nonatomic) NSString *address;
@property (nonatomic) char isValid;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;

@end
