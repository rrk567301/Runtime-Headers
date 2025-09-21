@class NSMutableArray, NSDate;

@interface DACActivityList : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_activeActivities;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastModified;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerate:(id /* block */)a0;
- (void)splitLocalOnly:(id /* block */)a0;
- (unsigned long long)activityCount;
- (char)addActivity:(id)a0 requester:(id)a1 changeMarker:(id)a2;
- (id)changeMarkerForActivity:(id)a0;
- (id)changesFromList:(id)a0 includingMetadata:(char)a1;
- (char)isEqualIgnoringLastModified:(id)a0;
- (id)listWithMerge:(id)a0;
- (char)removeActivity:(id)a0 requester:(id)a1;
- (unsigned long long)stateOfActivity:(id)a0;

@end
