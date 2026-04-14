@class NSString;

@interface ATXRouteCacheKey : NSObject <NSCopying> {
    NSString *destinationLocation;
    NSString *transportType;
    BOOL localOnlyAfterFirstUpdate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
