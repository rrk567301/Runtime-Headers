@class NSSet, MKTransitSectionPagingFilter, NSDate, MKMapItem;
@protocol GEOTransitSystem;

@interface MKTransitSectionController : NSObject {
    MKMapItem *_mapItem;
    NSSet *_linesToShow;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfFilteredRows;
    char _needsBuildRows;
}

@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (retain, nonatomic) NSDate *departureCutoffDate;
@property (retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate;
@property (retain, nonatomic) NSSet *incidentEntitiesToExclude;
@property (readonly, nonatomic) unsigned long long numberOfFilteredLines;
@property (readonly, nonatomic) MKTransitSectionPagingFilter *_pagingFilter;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (char)_needsBuildRows;
- (char)hasFilteredRows;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (char)hasFilteredLines;
- (void)incrementPagingFilter;
- (id)initWithMapItem:(id)a0 system:(id)a1;
- (id)linesToShow;

@end
