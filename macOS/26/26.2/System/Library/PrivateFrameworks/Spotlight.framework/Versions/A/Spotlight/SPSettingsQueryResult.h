@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)initWithResult:(id)a0;
- (id)groupName;
- (id)category;
- (id)valueForAttribute:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (BOOL)isFile;
- (BOOL)isDir;
- (id)copyrightString;
- (BOOL)isApplicationQueryResult;

@end
