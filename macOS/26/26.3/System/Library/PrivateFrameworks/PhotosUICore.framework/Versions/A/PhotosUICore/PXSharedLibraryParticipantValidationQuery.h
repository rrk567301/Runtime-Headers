@class NSString;

@interface PXSharedLibraryParticipantValidationQuery : NSObject

@property (readonly, nonatomic) NSString *address;
@property (nonatomic) BOOL isValid;

- (id)initWithAddress:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
