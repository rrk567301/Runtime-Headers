@class NSString, NSDictionary, NSData, DMFControlSessionIdentifier;

@interface CRKInstructor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *courseName;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) char disallowsClassroomAirDropOverLocalNetwork;
@property (nonatomic) char allowsStudentInitiatedDisconnection;
@property (nonatomic, getter=isObservingStudentScreen) char observingStudentScreen;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToInstructor:(id)a0;

@end
