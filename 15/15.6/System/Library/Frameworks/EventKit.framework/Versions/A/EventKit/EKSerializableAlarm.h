@class NSNumber, NSDate;

@interface EKSerializableAlarm : EKSerializableObject

@property (retain, nonatomic) NSNumber *relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (nonatomic) char isAbsolute;
@property (nonatomic) char isDefaultAlarm;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)createAlarm:(id *)a0;
- (id)initWithAlarm:(id)a0;

@end
